-- 从听歌流水中找到18-25岁用户在2022年每个月播放次数top 3的周杰伦的歌曲 当次数相同时，根据song_id排序
select
    month,ranking,song_name,play_pv
from
    (select month (fdate) month, song_id, row_number() over (
                partition by month (fdate) order by count(*) desc, song_id) ranking, song_name, count(*) play_pv
        from
            play_log
            join user_info using (user_id)
            join song_info using (song_id)
        where
            singer_name = '周杰伦' and year (fdate) = '2022' and age between 18 and 25
        group by
            month, song_name, song_id
    ) data1
where ranking <=3
order by month, ranking, song_id

-- 我的答案
select * from(
    select `month`,
    ROW_NUMBER() over(partition by `month` order by `count` desc)ranking,
    song_name,
    play_pv
    from(
        select MONTH(fdate) `month`,s.song_name,count(*) play_pv
        from play_log p
        join (select user_id,age from user_info where age between 18 and 25) u
        on p.user_id = u.user_id
        join (select song_id,song_name from song_info where singer_name = '周杰伦') s
        on p.song_id = s.song_id
        Group by `month`,s.song_name,s.song_id
    ) a
) b
where ranking <= 3;
order by `month`,ranking;
select date(o.order_time) as order_date,
         o.user_id,
         count(o.order_id) as order_num,
         u.vip
         from order_tb o left join uservip_tb u 
         on o.user_id = u.user_id
         group by o.user_id, date(o.order_time) having count(o.user_id)>1
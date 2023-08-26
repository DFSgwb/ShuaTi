 select t_point.user_id, (t_point.point + t_order.price) as point 
 from uservip_tb as t_point 
 join (select user_id, sum(order_price) 
 as price 
 from order_tb where order_price > 100 group by user_id) 
 as t_order on t_point.user_id = t_order.user_id 
 order by point desc 
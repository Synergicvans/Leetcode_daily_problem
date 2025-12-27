# Write your MySQL query statement below
select customer_id,count(customer_id)"count_no_trans"
from visits where visit_id not in
(select distinct v.visit_id
from visits v join transactions t on v.visit_id=
t.visit_id)
group by customer_id
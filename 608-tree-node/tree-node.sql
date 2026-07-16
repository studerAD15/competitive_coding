# Write your MySQL query statement below
select t1.id,case
when t1.p_id is NULL then 'Root'
when exists(select 1 from tree t2 where t1.id=t2.p_id) then 'Inner'
else 'Leaf'
end as type
from tree t1;
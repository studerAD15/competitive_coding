# Write your MySQL query statement below
select id, case 
when p_id is NULL then 'Root'
when id in(Select distinct p_id from tree where p_id is not null) then 'Inner'
else 'Leaf'
end as type
from tree;
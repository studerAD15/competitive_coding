# Write your MySQL query statement below
select employee_id ,
CASE
when employee_id % 2=1
And name not like 'M%' then salary 
else 0
end as Bonus from employees
order by employee_id;

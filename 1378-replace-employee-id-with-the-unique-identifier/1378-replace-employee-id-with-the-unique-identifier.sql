# Write your MySQL query statement below
select uni.unique_id,emp.name
from employees emp
left join employeeUNI uni
on emp.id=uni.id;
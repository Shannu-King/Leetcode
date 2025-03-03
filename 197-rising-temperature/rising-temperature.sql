# Write your MySQL query statement below
select e1.id
from weather e1 join weather e2
on datediff(e1.recordDate,e2.recordDate)=1
where e1.temperature>e2.temperature;
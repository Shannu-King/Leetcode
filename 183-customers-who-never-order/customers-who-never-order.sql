# Write your MySQL query statement below
SELECT NAME AS CUSTOMERS FROM CUSTOMERS
WHERE ID NOT IN(SELECT customerId from Orders )

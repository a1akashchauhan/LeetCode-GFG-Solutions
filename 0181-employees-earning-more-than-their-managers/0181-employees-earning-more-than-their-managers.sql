# Write your MySQL query statement below
SELECT e.name as Employee
FROM Employee as e JOIN Employee as m
WHERE e.managerId = m.id and e.salary > m.salary
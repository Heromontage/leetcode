# Write your MySQL query statement below
select e.name as Employee
From Employee e
JOIN Employee m
on e.managerID = m.id
where e.salary>m.salary;
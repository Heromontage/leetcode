# Write your MySQL query statement below
select Distinct e.email as Email from Person e
Join Person m
On e.email = m.email
where e.id != m.id;

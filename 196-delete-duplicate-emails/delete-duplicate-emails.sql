# Write your MySQL query statement below
delete p1 from Person p1,Person p2
where p1.Email=p2.Email AND p1.Id >p2.Id
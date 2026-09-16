# Write your MySQL query statement below
select max(salary)  SecondHighestSalary from Employee where salary < (select max(distinct salary) from Employee) ;

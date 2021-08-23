-- Problem: https://leetcode.com/problems/second-highest-salary/

SELECT MAX(Salary) SecondHighestSalary
FROM Employee
WHERE Salary <> (SELECT
                MAX(Salary) FROM Employee);
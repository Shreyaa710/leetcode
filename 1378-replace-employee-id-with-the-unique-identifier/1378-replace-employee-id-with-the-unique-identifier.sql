# Write your MySQL query statement below
SELECT EmpU.unique_id, Emp.name
FROM Employees AS Emp
LEFT JOIN EmployeeUNI AS EmpU ON Emp.id=EmpU.id;
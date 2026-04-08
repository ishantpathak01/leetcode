SELECT name AS Employee
FROM Employee E
WHERE salary > (
    SELECT salary 
    FROM Employee F 
    WHERE F.id = E.managerId
);
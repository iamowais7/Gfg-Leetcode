# Write your MySQL query statement below
Select e.name , b.bonus From Employee e left Join Bonus b On e.empId = b.empId Where b.bonus < 1000 OR b.bonus IS NULL;
# # Write your MySQL query statement below
# select name as Customers from Customers having Customers.id Not in (select customerId from Orders)

# SELECT Customers.name AS Customers 
# FROM Customers
# WHERE Customers.id NOT IN 
# (
#    SELECT customerId from Orders
# );

SELECT Name as Customers from Customers
LEFT JOIN Orders
ON Customers.Id = Orders.CustomerId
WHERE Orders.CustomerId IS NULL;

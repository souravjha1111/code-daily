DELETE n1 FROM person n1,
person n2 WHERE n1.ID > n2.ID AND n1.email = n2.email

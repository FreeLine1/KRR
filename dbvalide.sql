
DROP TABLE IF EXISTS `people`;

CREATE TABLE `people` (
  `Name` varchar(70) NOT NULL,
  `LastName` varchar(70) DEFAULT NULL,
  `email` varchar(70) DEFAULT NULL,
  PRIMARY KEY (`Name`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

LOCK TABLES `people` WRITE;

INSERT INTO `people` VALUES ('Admin','Admin','Admin@mail.ru'),('Alan','Antypov','MrRobot@gmail.com'),('Roon','Rick','roman@gmail.com'),('Vasd','Fdfh','vasdf@gmail.com');

UNLOCK TABLES;


DROP TABLE IF EXISTS `products`;

CREATE TABLE `products` (
  `id` int(11) NOT NULL,
  `product` varchar(70) DEFAULT NULL,
  `type` varchar(45) DEFAULT NULL,
  `Number` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;


LOCK TABLES `products` WRITE;

INSERT INTO `products` VALUES (1,'Mazda','Qvew1-w',2),(2,'Audi','Q7',1),(3,'Honda','GT7',6);

UNLOCK TABLES;

DROP TABLE IF EXISTS `user`;

CREATE TABLE `user` (
  `email` varchar(150) NOT NULL,
  `password` varchar(150) NOT NULL,
  `id` int(11) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;


LOCK TABLES `user` WRITE;

INSERT INTO `user` VALUES ('Gof@gmail.com','4813494d137e1631bba301d5acab6e7bb7aa74ce1185d456565ef51d737677b2',1),('MrRobot@gmail.com','4813494d137e1631bba301d5acab6e7bb7aa74ce1185d456565ef51d737677b2',2),('roman@gmail.com','4813494d137e1631bba301d5acab6e7bb7aa74ce1185d456565ef51d737677b2',3),('vasdf@gmail.com','4813494d137e1631bba301d5acab6e7bb7aa74ce1185d456565ef51d737677b2',4),('Admin2@mail.ru','4813494d137e1631bba301d5acab6e7bb7aa74ce1185d456565ef51d737677b2',5);

UNLOCK TABLES;

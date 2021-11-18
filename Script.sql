create table Empleados(
    DNI_Empleados int, 
    Nombre_Empleados varchar(50),
    Apellido_Empleados varchar(50),
    Codigo_Postal varchar(30),
    Direccion varchar(50),
    N_Local int,
    
    constraint pk_DNI_Empleados primary key (DNI_Empleados)
);

create table Locales(
    Numero int,
    Localidad varchar(50),
    Direccion varchar(50),

    constraint pk_Numero primary key (Numero)
);

create table Productos(
    Codigo int,
    Nombre_Prod varchar(50),

    constraint pk_Codigo primary key (Codigo)
);

create table Disenador(
    DNI_Dise int,
    Nombre_Dise varchar(50),
    Apellido_Dise varchar(50),

    constraint pk_DNI_Dise primary key (DNI_Dise)
);

create table Clientes(
    DNI_Cliente int,
    Nombre_Cliente varchar(50),
    Apellido_Cliente varchar(50),
    Edad varchar(50),
    Productos int,

    constraint pk_DNI_Clientes primary key (DNI_Cliente),
    constraint fk_Productos foreign key (Productos) references Productos (Codigo)
    
);


-- Relaciones



create table venden(
    compuesta int,
    Codigo_Pr int,
    DNI_Empl int,
    Fecha_Vendido date,


    constraint fk_Codigo_Pr foreign key (Codigo_Pr) references Productos (Codigo),
    constraint fk_DNI_Empl foreign key (DNI_Empl) references Empleados (DNI_Empleados), 
    constraint pk_compuesta primary key (DNI_Empl, Codigo_Pr)
);

create table Crean(
    compuesta int,
    Codigo_P int,
    DNI_Disenador int,
    Fecha_Creacion date,

    constraint pk_compuesta primary key (DNI_Disenador, Codigo_P),
    constraint fk_Codigo_P foreign key (Codigo_P) references Productos (Codigo),
    constraint fk_DNI_Dise foreign key (DNI_Disenador) references Disenador (DNI_Dise)
);


INSERT INTO Clientes(`DNI_Cliente`, `Nombre_Cliente`, `Apellido_Cliente`, `Edad`, `Productos`)
VALUES ( '46122236', 'Lucas', 'Carratu', '16', '8');

UPDATE venden SET Fecha_Vendido='2019-07-01' WHERE Codigo_Pr='116';

INSERT INTO venden(`Codigo_Pr`, `DNI_Empl`, `Fecha_Vendido`)
VALUES('8', '36501336', '2021-12-09');



INSERT INTO Crean( `Codigo_P`, `DNI_Disenador`, `Fecha_Creacion`) VALUES ( '77', '19612759', '1990-12-22');


--EMPLEADOS:
INSERT INTO Empleados(`DNI_Empleados`, `Nombre_Empleados`, `Apellido_Empleados`, `Codigo_Postal`, `Direccion`, `N_Local`)VALUES ('20326419', 'Lautaro Francisco', 'Ramos','2042','Av. Lope de Vega 2214','3');


INSERT INTO Empleados(`DNI_Empleados`, `Nombre_Empleados`, `Apellido_Empleados`, `Codigo_Postal`, `Direccion`, `N_Local`)VALUES ('24326439', 'Gloria', 'Sanches','2345','Av. Santa Fe 1234','2');


INSERT INTO Empleados(`DNI_Empleados`, `Nombre_Empleados`, `Apellido_Empleados`, `Codigo_Postal`, `Direccion`, `N_Local`)VALUES ('26326419', 'Hernan Luciano', 'Hermioni','2342','Av. Libertador 1214','3');


INSERT INTO Empleados(`DNI_Empleados`, `Nombre_Empleados`, `Apellido_Empleados`, `Codigo_Postal`, `Direccion`, `N_Local`)VALUES (' 33502436', 'Martina Pilar', 'Gonzalez','1917','Beruti 2756','1');


--5

INSERT INTO Empleados(`DNI_Empleados`, `Nombre_Empleados`, `Apellido_Empleados`, `Codigo_Postal`, `Direccion`, `N_Local`)VALUES ('36501336', 'Belen Lucia', 'Rey','1417','Veragua 3002','1');


INSERT INTO Empleados(`DNI_Empleados`, `Nombre_Empleados`, `Apellido_Empleados`, `Codigo_Postal`, `Direccion`, `N_Local`)VALUES ('44321439', 'Valentina Ramona', 'Careal','1116','Benito Juarez 1234','1');


INSERT INTO Empleados(`DNI_Empleados`, `Nombre_Empleados`, `Apellido_Empleados`, `Codigo_Postal`, `Direccion`, `N_Local`)VALUES ('45522436', 'Martin', 'Perez','1917','Beruti 2004','1');


INSERT INTO Empleados(`DNI_Empleados`, `Nombre_Empleados`, `Apellido_Empleados`, `Codigo_Postal`, `Direccion`, `N_Local`)VALUES ('45522439', 'Franco Ramiro', 'Armani','1416','Benito Juarez 2214','1');


INSERT INTO Empleados(`DNI_Empleados`, `Nombre_Empleados`, `Apellido_Empleados`, `Codigo_Postal`, `Direccion`, `N_Local`)VALUES ('46502436', 'Lucas', 'Ramirez','1263','Bolivar 2463','2');

SELECT * from Empleados ORDER BY N_Local asc; 









--CLIENTES:
INSERT INTO Clientes(`DNI_Cliente`, `Nombre_Cliente`, `Apellido_Cliente`, `Edad`, `Productos`)
VALUES ( '46123136', 'Arturo Gabriel', 'Avila', '16', '123');

INSERT INTO Clientes(`DNI_Cliente`, `Nombre_Cliente`, `Apellido_Cliente`, `Edad`, `Productos`)
VALUES ( '46277136', 'Matias Tomas', 'Heuchert', '16', '116');

INSERT INTO Clientes(`DNI_Cliente`, `Nombre_Cliente`, `Apellido_Cliente`, `Edad`, `Productos`)
VALUES ( '46501336', 'Lucia Belen', 'Aizcorbe Rey', '16', '6');

INSERT INTO Clientes(`DNI_Cliente`, `Nombre_Cliente`, `Apellido_Cliente`, `Edad`, `Productos`)
VALUES ( '46122236', 'Lucas', 'Carratu', '16', '8');

--DISEÑADORES:


INSERT INTO Disenador(`DNI_Dise`, `Nombre_Dise`, `Apellido_Dise`) VALUES ('19333751', 'Leonarda Distefana', 'Cartu');


INSERT INTO Disenador(`DNI_Dise`, `Nombre_Dise`, `Apellido_Dise`) VALUES ('19612759', 'Alfred Ramos', 'Gomez');


INSERT INTO Disenador(`DNI_Dise`, `Nombre_Dise`, `Apellido_Dise`) VALUES ('21612739', 'Rodo Ramiro', 'Sanchez');


--PRODUCTOS:

INSERT INTO Productos(`Codigo`, `Nombre_Prod`) VALUES ('1', 'Spider Man');

INSERT INTO Productos(`Codigo`, `Nombre_Prod`) VALUES ('2', 'Duende Verde');


INSERT INTO Productos(`Codigo`, `Nombre_Prod`) VALUES ('3', 'Doctor Octopus');


INSERT INTO Productos(`Codigo`, `Nombre_Prod`) VALUES ('4', 'Misterio');


INSERT INTO Productos(`Codigo`, `Nombre_Prod`) VALUES ('5', 'Happy');


INSERT INTO Productos(`Codigo`, `Nombre_Prod`) VALUES ('6', 'Iron Man');


INSERT INTO Productos(`Codigo`, `Nombre_Prod`) VALUES ('7', 'Capitan America');


INSERT INTO Productos(`Codigo`, `Nombre_Prod`) VALUES ('8', 'Thor');


INSERT INTO Productos(`Codigo`, `Nombre_Prod`) VALUES ('9', 'Loki');

INSERT INTO Productos(`Codigo`, `Nombre_Prod`) VALUES ('10', 'Black Widow');


INSERT INTO Productos(`Codigo`, `Nombre_Prod`) VALUES ('11', 'ANT-MAN');


INSERT INTO Productos(`Codigo`, `Nombre_Prod`) VALUES ('12', 'Hulk');


--LOCALES: 

INSERT INTO Productos(`Numero`, `Localidad`, `Direccion`) VALUES ('1', 'Devoto', 'Mercedes 4001');

INSERT INTO Productos(`Numero`, `Localidad`, `Direccion`) VALUES ('2', 'Palermo', 'Av. Santa Fe 2456');

INSERT INTO Productos(`Numero`, `Localidad`, `Direccion`) VALUES ('3', 'Recoleta', 'Av. Alvear 1999');

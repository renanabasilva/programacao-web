
DROP DATABASE IF EXISTS RASCOMISSAO;
CREATE DATABASE IF NOT EXISTS RASCOMISSAO;
USE RASCOMISSAO;

DROP TABLE IF EXISTS RASPessoa;
DROP TABLE IF EXISTS RASPostal;
DROP TABLE IF EXISTS RASMensagem;
DROP TABLE IF EXISTS RASComissao;


CREATE TABLE RASPostal(
	Codigo 		Numeric(4) PRIMARY KEY, 
	Localidade  Char(30) NOT NULL
);

INSERT INTO RASPostal VALUES(1000,'LISBOA');
INSERT INTO RASPostal VALUES(1100,'LISBOA');
INSERT INTO RASPostal VALUES(1200,'LISBOA');
INSERT INTO RASPostal VALUES(1500,'LISBOA');
INSERT INTO RASPostal VALUES(2000,'SANTAREM');
INSERT INTO RASPostal VALUES(2300,'TOMAR');
INSERT INTO RASPostal VALUES(3000,'COIMBRA');
INSERT INTO RASPostal VALUES(4000,'PORTO');
INSERT INTO RASPostal VALUES(9000,'FUNCHAL');


CREATE TABLE RASPessoa(Id         NUMERIC           PRIMARY KEY, 
                    Nome       CHAR(30)          NOT NULL,
                    Idade      INTEGER           NOT NULL CHECK (Idade BETWEEN 0 AND 150),
                    Salario    NUMERIC(10,2)     NOT NULL,
                    Telefone   CHAR(12)          NULL,
                    Cod_Postal NUMERIC(4)        REFERENCES RASPostal(Codigo)
                   );
CREATE UNIQUE INDEX iNome ON RASPessoa(Nome);
CREATE INDEX iTelefone ON RASPessoa(Telefone);

INSERT INTO RASPessoa VALUES(42,'António Dias',43,74000,'789654',1500);
INSERT INTO RASPessoa VALUES(5,'Célia Morais',26,170000,'123456',1100);
INSERT INTO RASPessoa VALUES(32,'Florinda Simões',35,147000,NULL,4000);
INSERT INTO RASPessoa VALUES(37,'Isabel Espada',28,86000,NULL,1100);
INSERT INTO RASPessoa VALUES(49,'José António',17,210000,NULL,1500);
INSERT INTO RASPessoa VALUES(14,'Nascimento Augusto',35,220000,'456123',2300);
INSERT INTO RASPessoa VALUES(25,'Paulo Viegas',32,95000,NULL,1500);


CREATE TABLE RASMensagem(Id_Msg     NUMERIC           PRIMARY KEY, 
                      RASMensagem   CHAR(30)          NOT NULL
                     );
CREATE UNIQUE INDEX iMsg ON RASMensagem(RASMensagem);

INSERT INTO RASMensagem(Id_Msg, RASMensagem) VALUES(10,'Comissão de Vendas');
INSERT INTO RASMensagem(Id_Msg, RASMensagem) VALUES(20,'Fretes Individuais');
INSERT INTO RASMensagem(Id_Msg, RASMensagem) VALUES(30,'Fretes Empresas');
INSERT INTO RASMensagem(Id_Msg, RASMensagem) VALUES(40,'Vendas Extra');
INSERT INTO RASMensagem(Id_Msg, RASMensagem) VALUES(50,'Deslocações');
INSERT INTO RASMensagem(Id_Msg, RASMensagem) VALUES(60,'Refeições');
INSERT INTO RASMensagem(Id_Msg, RASMensagem) VALUES(70,'Combustíveis');
INSERT INTO RASMensagem(Id_Msg, RASMensagem) VALUES(80,'Transportes');
INSERT INTO RASMensagem(Id_Msg, RASMensagem) VALUES(90,'Telefonemas');
INSERT INTO RASMensagem(Id_Msg, RASMensagem) VALUES(100,'Ofertas');


CREATE TABLE RASComissao(Id       NUMERIC          NOT NULL,
                      Id_Msg   NUMERIC          NOT NULL, 
                      Valor    NUMERIC          NOT NULL
                     );
CREATE INDEX iComissao ON RASComissao(Id,Id_Msg);

INSERT INTO RASComissao VALUES(14,10,10500);
INSERT INTO RASComissao VALUES(25,10,2500);
INSERT INTO RASComissao VALUES(14,100,3750);
INSERT INTO RASComissao VALUES(14,70,400);
INSERT INTO RASComissao VALUES(37,40,20);
INSERT INTO RASComissao VALUES(37,30,14230);
INSERT INTO RASComissao VALUES(37,10,5500);
INSERT INTO RASComissao VALUES(14,60,2600);
INSERT INTO RASComissao VALUES(25,30,370);
INSERT INTO RASComissao VALUES(42,20,20);
INSERT INTO RASComissao VALUES(37,50,120);
INSERT INTO RASComissao VALUES(42,30,170);
INSERT INTO RASComissao VALUES(49,20,2300);

COMMIT;
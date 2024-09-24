-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 30/08/2024 às 15:42
-- Versão do servidor: 10.4.32-MariaDB
-- Versão do PHP: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `bdcomissao`
--
CREATE DATABASE IF NOT EXISTS `bdcomissao` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `bdcomissao`;

-- --------------------------------------------------------

--
-- Estrutura para tabela `comissao`
--

DROP TABLE IF EXISTS `comissao`;
CREATE TABLE IF NOT EXISTS `comissao` (
  `Id` decimal(10,0) NOT NULL,
  `Id_Msg` decimal(10,0) NOT NULL,
  `Valor` decimal(10,0) NOT NULL,
  KEY `iComissao` (`Id`,`Id_Msg`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Despejando dados para a tabela `comissao`
--

INSERT INTO `comissao` (`Id`, `Id_Msg`, `Valor`) VALUES
(14, 10, 10500),
(25, 10, 2500),
(14, 100, 3750),
(14, 70, 400),
(37, 40, 20),
(37, 30, 14230),
(37, 10, 5500),
(14, 60, 2600),
(25, 30, 370),
(42, 20, 20),
(37, 50, 120),
(42, 30, 170),
(49, 20, 2300);

-- --------------------------------------------------------

--
-- Estrutura para tabela `mensagem`
--

DROP TABLE IF EXISTS `mensagem`;
CREATE TABLE IF NOT EXISTS `mensagem` (
  `Id_Msg` decimal(10,0) NOT NULL,
  `Mensagem` char(30) NOT NULL,
  PRIMARY KEY (`Id_Msg`),
  UNIQUE KEY `iMsg` (`Mensagem`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Despejando dados para a tabela `mensagem`
--

INSERT INTO `mensagem` (`Id_Msg`, `Mensagem`) VALUES
(70, 'Combustíveis'),
(10, 'Comissão de Vendas'),
(50, 'Deslocações'),
(30, 'Fretes Empresas'),
(20, 'Fretes Individuais'),
(100, 'Ofertas'),
(60, 'Refeições'),
(90, 'Telefonemas'),
(80, 'Transportes'),
(40, 'Vendas Extra');

-- --------------------------------------------------------

--
-- Estrutura para tabela `pessoa`
--

DROP TABLE IF EXISTS `pessoa`;
CREATE TABLE IF NOT EXISTS `pessoa` (
  `Id` decimal(10,0) NOT NULL,
  `Nome` char(30) NOT NULL,
  `Idade` int(11) NOT NULL CHECK (`Idade` between 0 and 150),
  `Salario` decimal(10,2) NOT NULL,
  `Telefone` char(12) DEFAULT NULL,
  `Cod_Postal` decimal(4,0) DEFAULT NULL,
  PRIMARY KEY (`Id`),
  UNIQUE KEY `iNome` (`Nome`),
  KEY `iTelefone` (`Telefone`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Despejando dados para a tabela `pessoa`
--

INSERT INTO `pessoa` (`Id`, `Nome`, `Idade`, `Salario`, `Telefone`, `Cod_Postal`) VALUES
(5, 'Célia Morais', 26, 170000.00, '123456', 1100),
(14, 'Nascimento Augusto', 35, 220000.00, '456123', 2300),
(25, 'Paulo Viegas', 32, 95000.00, NULL, 1500),
(32, 'Florinda Simões', 35, 147000.00, NULL, 4000),
(37, 'Isabel Espada', 28, 86000.00, NULL, 1100),
(42, 'António Dias', 43, 74000.00, '789654', 1500),
(49, 'José António', 17, 210000.00, NULL, 1500);

-- --------------------------------------------------------

--
-- Estrutura para tabela `postal`
--

DROP TABLE IF EXISTS `postal`;
CREATE TABLE IF NOT EXISTS `postal` (
  `Codigo` decimal(4,0) NOT NULL,
  `Localidade` char(30) NOT NULL,
  PRIMARY KEY (`Codigo`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Despejando dados para a tabela `postal`
--

INSERT INTO `postal` (`Codigo`, `Localidade`) VALUES
(1000, 'LISBOA'),
(1100, 'LISBOA'),
(1200, 'LISBOA'),
(1500, 'LISBOA'),
(2000, 'SANTAREM'),
(2300, 'TOMAR'),
(3000, 'COIMBRA'),
(4000, 'PORTO'),
(9000, 'FUNCHAL');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;

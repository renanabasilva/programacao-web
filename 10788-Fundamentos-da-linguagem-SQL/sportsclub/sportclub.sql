-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 29/08/2024 às 12:06
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
-- Banco de dados: `sportsclub`
--
CREATE DATABASE IF NOT EXISTS `sportsclub` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `sportsclub`;

-- --------------------------------------------------------

--
-- Estrutura para tabela `Member`
--

DROP TABLE IF EXISTS `Member`;
CREATE TABLE IF NOT EXISTS `Member` (
  `MemberId` varchar(6) NOT NULL,
  `FirstName` varchar(40) NOT NULL,
  `LastName` varchar(40) NOT NULL,
  `Phone` varchar(15) NOT NULL,
  PRIMARY KEY (`MemberId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Despejando dados para a tabela `Member`
--

INSERT INTO `Member` (`MemberId`, `FirstName`, `LastName`, `Phone`) VALUES
('012010', 'Emily', 'Marr', '01632 961743'),
('131092', 'Joe', 'Donald', '01632 960007'),
('132099', 'Abdel', 'Patel', '01632 967267'),
('145543', 'Precious', 'Jones', '01632 962816'),
('148765', 'Jack', 'Marr', '01632 961743');

-- --------------------------------------------------------

--
-- Estrutura para tabela `Instructor`
--

DROP TABLE IF EXISTS `Instructor`;
CREATE TABLE IF NOT EXISTS `Instructor` (
  `InstructorId` int(11) NOT NULL,
  `FirstName` varchar(40) NOT NULL,
  `LastName` varchar(40) NOT NULL,
  `Email` varchar(60) NOT NULL,
  PRIMARY KEY (`InstructorId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Despejando dados para a tabela `Instructor`
--

INSERT INTO `Instructor` (`InstructorId`, `FirstName`, `LastName`, `Email`) VALUES
(1,	'Sue',	'James',	'sue.james@example.org'),
(2,	'Greta',	'Geuze',	'g.geuze@example.com'),
(3,	'Mohammed',	'Franks',	'm.franks@example.com'),
(4,	'Jay',	'Linton',	'Jay12@example.net'),
(5,	'Sue',	'Robbins',	'susan.robbins@example.net');


-- --------------------------------------------------------

--
-- Estrutura para tabela `Course`
--

DROP TABLE IF EXISTS `Course`;
CREATE TABLE IF NOT EXISTS `Course` (
  `CourseCode` varchar(6) NOT NULL,
  `Description` varchar(500) NOT NULL,
  `Fee` float NOT NULL,
  PRIMARY KEY (`CourseCode`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Despejando dados para a tabela `Course`
--

INSERT INTO `Course` (`CourseCode`, `Description`, `Fee`) VALUES
('DG0011',	'Tennis',	30.00),
('CR0001',	'Kayaking',	100.00),
('DG3002',	'Swimming',	20.00),
('SO0112',	'Judo L1',	20.00),
('SP8701',	'Judo L2',	30.00),
('CR0020',	'Badminton',	20.00),
('CR0014',	'Climbing',	40.00);


-- --------------------------------------------------------

--
-- Estrutura para tabela `Certificate`
--

DROP TABLE IF EXISTS `Certificate`;
CREATE TABLE IF NOT EXISTS `Certificate` (
  `MemberId` varchar(6) NOT NULL,
  `CourseCode` varchar(6) NOT NULL,
  `AssessmentDate` date NOT NULL,
  `InstructorId` int(11) NOT NULL,
  PRIMARY KEY (`MemberId`,`CourseCode`),
  FOREIGN KEY (`MemberId`) REFERENCES `Member` (`MemberId`),
  FOREIGN KEY (`CourseCode`) REFERENCES `Course` (`CourseCode`),
  FOREIGN KEY (`InstructorId`) REFERENCES `Instructor` (`InstructorId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Despejando dados para a tabela `Certificate`
--

INSERT INTO `Certificate` (`MemberId`, `CourseCode`, `AssessmentDate`, `InstructorId`) VALUES
('145543',	'DG0011',	'2019-02-21',	1),
('012010',	'DG0011',	'2019-02-21',	1),
('132099',	'DG3002',	'2019-03-01',	2),
('131092',	'CR0001',	'2019-04-15',	3),
('132099',	'CR0001',	'2019-04-15',	3),
('012010',	'CR0020',	'2019-04-15',	5),
('132099',	'SO0112',	'2019-06-02',	4),
('145543',	'SO0112',	'2019-06-02',	4),
('148765',	'SP8701',	'2019-06-11',	2),
('145543',	'CR0014',	'2019-07-01',	5);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
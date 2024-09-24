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
-- Banco de dados: `biblioteca`
--
CREATE DATABASE IF NOT EXISTS `biblioteca` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `biblioteca`;

-- --------------------------------------------------------

--
-- Estrutura para tabela `autor`
--

DROP TABLE IF EXISTS `autor`;
CREATE TABLE IF NOT EXISTS `autor` (
  `cod_autor` int(11) NOT NULL,
  `nome` varchar(30) NOT NULL,
  `nacionalidade` varchar(13) NOT NULL,
  PRIMARY KEY (`cod_autor`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Despejando dados para a tabela `autor`
--

INSERT INTO `autor` (`cod_autor`, `nome`, `nacionalidade`) VALUES
(234, 'Renan Aba', 'Brasileiro'),
(235, 'Aba Renan', 'Brasileiro');

-- --------------------------------------------------------

--
-- Estrutura para tabela `autor_livro`
--

DROP TABLE IF EXISTS `autor_livro`;
CREATE TABLE IF NOT EXISTS `autor_livro` (
  `cod_autor` int(11) NOT NULL,
  `cod_livro` decimal(2,0) NOT NULL,
  PRIMARY KEY (`cod_autor`,`cod_livro`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `livro`
--

DROP TABLE IF EXISTS `livro`;
CREATE TABLE IF NOT EXISTS `livro` (
  `cod_livro` int(11) NOT NULL,
  `titulo` varchar(30) NOT NULL,
  `num_paginas` int(11) NOT NULL,
  PRIMARY KEY (`cod_livro`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Despejando dados para a tabela `livro`
--

INSERT INTO `livro` (`cod_livro`, `titulo`, `num_paginas`) VALUES
(99, 'SQL', 99),
(10045, 'SQL', 400);

-- --------------------------------------------------------

--
-- Estrutura para tabela `requisicao`
--

DROP TABLE IF EXISTS `requisicao`;
CREATE TABLE IF NOT EXISTS `requisicao` (
  `num_requisicao` int(11) NOT NULL,
  `num_utente` int(2) NOT NULL,
  `cod_livro` decimal(2,0) NOT NULL,
  `data_saida` date NOT NULL,
  `data_entrada` date NOT NULL,
  PRIMARY KEY (`num_requisicao`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `utente`
--

DROP TABLE IF EXISTS `utente`;
CREATE TABLE IF NOT EXISTS `utente` (
  `num_utente` int(2) NOT NULL,
  `nome` varchar(20) NOT NULL,
  `morada` varchar(20) NOT NULL,
  `telefone` varchar(9) NOT NULL,
  PRIMARY KEY (`num_utente`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;

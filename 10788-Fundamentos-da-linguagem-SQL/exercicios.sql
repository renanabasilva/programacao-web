-- 1. Questão: selecionar, de forma única, as localidades das pessoas que não têm telefone:

SELECT DISTINCT pessoa.*, postal.Localidade FROM pessoa JOIN postal ON pessoa.Cod_Postal = postal.Codigo WHERE pessoa.telefone IS NULL;

-- OU

SELECT DISTINCT pessoa.*, postal.Localidade FROM pessoa, postal WHERE pessoa.Cod_Postal = postal.Codigo AND pessoa.telefone IS NULL;

-- 2. Questão: selecionar todas as comissões e o seu destinatário (Id e Nome):

SELECT pessoa.*, comissao.Valor FROM pessoa, comissao WHERE pessoa.Id = comissao.Id;

-- 3. Questão: selecionar o Nome e o Valor das Comissões, ordenando o resultado pelo Nome, colocando os maiores valores de comissão no topo do resultado de cada indivíduo

SELECT pessoa.Nome, comissao.Valor FROM pessoa, comissao WHERE pessoa.Id = comissao.Id ORDER BY pessoa.Nome, comissao.valor DESC;

-- 4. Questão: selecionar todas as comissões, o seu destinatário e a descrição da operação que refletem. O resultado deve ser ordenado por Nome

SELECT pessoa.nome, comissao.valor, mensagem.Mensagem FROM pessoa, comissao, mensagem WHERE pessoa.id = comissao.id AND comissao.id_msg = mensagem.id_msg ORDER BY pessoa.nome ASC;

-- 5. Questão: selecionar todas as comissões, o seu destinatário e a descrição da operação que refletem. O resultado deve ser ordenado por Nome; adicionar à seleção anterior   atributo com o Id da Pessoa

SELECT pessoa.nome, pessoa.id, comissao.valor, mensagem.Mensagem FROM pessoa p, comissao, mensagem WHERE pessoa.id = comissao.id AND comissao.id_msg = mensagem.id_msg ORDER BY pessoa.nome ASC;

-- Ou

SELECT p.nome, p.id, comissao.valor, mensagem.Mensagem FROM pessoa p, comissao, mensagem WHERE p.id = comissao.id AND comissao.id_msg = mensagem.id_msg ORDER BY p.nome ASC;

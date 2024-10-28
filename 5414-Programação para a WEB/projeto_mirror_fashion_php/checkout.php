<!DOCTYPE html>
<html lang="pt">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Checkout Mirror Fashion</title>
  <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@3.4.1/dist/css/bootstrap.min.css" integrity="sha384-HSMxcRTRxnN+Bdg0JdbxYKrThecOKuH5zCYotlSAcp1+c8xmyTe9GYg1l9a69psu" crossorigin="anonymous">
</head>

<body>
  <div class="jumbotron">
    <div class="container">
      <h1>Ótima escolha!</h1>
      <p>Obrigado por comprar na Mirror Fashion!
        Preencha os seus dados para efetivar a compra.
      </p>
    </div> <!-- fim .container dentro do jumbotron -->
  </div> <!-- fim .jumbotron -->
  <div class="container">
    <div class="panel panel-default">
      <div class="panel-heading">
        <h2 class="panel-title">Sua compra</h2>
      </div> <!-- fim .panel-heading -->
      <div class="panel-body">
        <img src="img/produtos/foto<?= $_POST['id'] ?>-<?= $_POST['cor'] ?>.png" class="img-thumbnail img-responsive">
        <dl>
          <dt>Produto</dt>
          <dd><?= $_POST['nome'] ?></dd>
          <dt>Preço</dt>
          <dd><?= $_POST['preco'] ?></dd>
          <dt>Cor</dt>
          <dd><?= $_POST['cor'] ?></dd>
          <dt>Tamanho</dt>
          <dd><?= $_POST['tamanho'] ?></dd>
        </dl>
      </div> <!-- fim .panel-body -->
    </div> <!-- fim .panel -->
  </div><!-- fim .container da página -->
</body>

</html>
<?php 
session_start("seguranca"); //in�cio da sess�o

if (!isset($_SESSION["admin_logado"])) //caso log_user n�o existir, ent�o o usu�rio ainda n�o fez o login
{
	echo "<script>alert('Fa�a o login.');document.location='index.php'</script>";
	exit; //encerra o processamento. Usado por seguran�a caso o javascript esteja desabilitado
}

?>
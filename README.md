# Desenvolvendo GTK+2 em Mac OSx com XCode 6

Estava desenvolvendo um projeto cuja a interface seria em GTK, instalei e configurei no Windows e Linux tranquilo, só que no Mac acabei encontrando algum problemas nos quais resolvi documentar para não sofrer novamente. As dificuldades foram as seguintes.

  - Instalar GTK no Mac
  - Verificar as dependências que o GTK exige (X11 - XQuartz)
  - Encontrar uma IDE agradável (Eclipse e/ou XCode), optei pelo XCode por ser nativo do Mac, bla bla bla...

### Instalação

Listando essas dificuldades, fui aos poucos vencendo, a instalação do GTK no Mac pode ser feita através de um pacote de instalação.
Faça o download do arquivo (GTK_2.24.17-X11.pkg), clique duas vezes e vai confirmando as perguntas que ele fizer. Logo após a instalação precisei marcar a biblioteca na variável de ambiente do Mac. No terminal fiz o seguinte procedimento:
```sh
$ echo "export PATH=\"$PATH:\"/Library/Frameworks/GTK+.framework/Resources/bin\"\"" >> ~/.bash_profile
```

Depois disto você pode testar um exemplo de demonstração que tem no framework instalado, basta digitar esse comando:
```sh
$ gtk-demo
```
No meu caso apresentou um erro de X11 (Xorg), que é a biblioteca responsável por gerenciar a criação das janelas, abaixo o resultado depois de digitado o comando gtk-demo.
```sh
dyld: Library not loaded: /usr/X11/lib/libXinerama.1.dylib
```

Precisei instalar uma imagem (DMG) chamada XQuartz (XQuartz-2.7.7), depois de instalado começo a apresentar a tela de demonstração do GTK.

Com isso terminamos a instalação, os dois primeiros passos foram concluidos com êxito e sem muitos problemas. 
### Configurando Ambiente de Desenvolvimento

A parte que mais me consumiu tempo foi essa da configuração do ambiente de desenvolvimento (XCode), pois não existe muitos posts falando sobre isso, o que achei e me ajudou muito foi um post francês do [Guimers8]. Lá ele comenta como fazer algumas das configurações no XCode, basendo no dele fiz um projeto tema para iniciar os meus projetos em GTK+2 no Mac.

### Importando projeto

Tem duas formas iniciar esse projeto:
- Fazer o download do zip do projeto.
- Fazer um clone deste projeto na máquina atráves dos comandos do git

```sh
$ git clone https://github.com/trfiladelfo/gtk-on-mac <nome do projeto>
```

### ChangeLog 

1.0 - Template GTKonMac (GTKoM)
- Mac OSx Yosemite
- GTK+2
- XQuartz 2.7.7
- XCode 6

[Guimers8]:http://openclassrooms.com/courses/creez-une-interface-avec-gtk/installer-gtk-sous-macos-x

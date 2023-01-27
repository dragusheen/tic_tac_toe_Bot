***
<h1 align = "center">Tic Tac Toe</h1>
<h3 align = "right">By Dragusheen</h3>

<h2 align = "center"><U>Description</U></h2>
<h6><br></h6>
<h3><U>Project</U></h3>
<p>
The goal of this project is to design a <b>bot</b> able to play against a human player at the <i>tic-tac-toe</i> game.
</p>
<h6><br></h6>
<h3><U>Details</U></h3>
<p>
<li>Language : C</li>
<li>inspiration of the <a href = "https://fr.wikipedia.org/wiki/Algorithme_minimax">MinMax algorithm</a></li>
<li>Library : Ncurses</li>

</p>

***

<h2 align = "center"><U>Compilation / Deletion</U></h2>
<h3><U>Compilation</U></h3>
<h4>At the root of the project</h4>

<blockquote>
<code>make<br>
./tic_tab_toe
</code>
</blockquote>
<br>
<h3><U>Deletion</U></h3>
<h4>At the root of the project</h4>

<blockquote>
<code>make fclean<br></code>
</blockquote>
<br>


***

<h2 align = "center"><U>Play</U></h2>
<h3 align = "left"><U>Process of each game</U></h3>
<p>
Tic tac toe's match consists of a rotation between the player's turn and the bot's turn.<br>
Moreover the game ends when the player or the bot aligns 3 crosses.<br>
The player plays with the crosses ( X ) and the bot with the circles ( O ).
</p>
<h6><br></h6>
<h3 align = "left"><U>Player's turn</U></h3>
<p>
To play, the player have to use the directional arrows of the keyboard.<br>
To validate a position, he must press the 'enter' button which, if the space is not already occupied by a cross or a circle, places a cross in the selected space.<br>
The player can follow the position of the space he wants to select thanks to the '+' that he controls during his turn.<br>
</p>
<h6><br></h6>
<h3 align = "left"><U>Turn of the bot</U></h3>
<p>
The bot's algorithm is inspired by the MinMax algorithm.<br>
At each turn, the robot calculates its chances of winning according to the position it chooses.<br>
The algorithm consists of the following steps<br>
<ul>
<li>Creation of a blank 3 by 3 table</li>
<li>Calculation of points for each cell:</li>
<ol>
<li> -1, if the cell is already occupied</li>
<li> 0, if the cell does not allow to win or to block the opponent</li>
<li> +1, if the cell allows to block the opponent</li>
<li> +2, if the cell allows to win</li>
</ol>
<li>We keep the cell with the most points</li>
</ul>
</p>
<br>

***

<center>

<h2><U>Example</U></h2>
<h6><br></h6>
<h3>Winning a game</h3>
<video width = "120" height = "145" loop align = "right">
    <source src = "extern/example_video_1_Won.mp4" type = video/mp4>
</video>
<h6><br></h6>
<h3>Losing a game</h3>
<video width = "120" height = "145" loop align = "right">
    <source src = "extern/example_video_1_Lose.mp4" type = video/mp4>
</video>

</center>
<p>

***

<h6><br></h6>
<h3><U>Language and Tools</U></h3>
<br>
<img src = "https://img.icons8.com/color/480/c-programming.png" alt = "C" width = "40"  height = "40" title = "C"> <img src = "https://cdn.freebiesupply.com/images/large/2x/linux-logo-png-transparent.png" alt = "Linux" title = "linux" width = "40" height = "40">

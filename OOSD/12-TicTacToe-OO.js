// Define program parameters.
const BOARD_SIZE = 3;	
const PLAYER1 = 'X';					
const PLAYER2 = 'O';					

// Class Corresponding to Game Board Table
class Board
{	
    constructor()
    {
		// Get HTML Table Element, clear it and set its Mouse Click Handler		
		var htmlTableElement = document.getElementById('GameTable');

		htmlTableElement.innerHTML = '';

		htmlTableElement.onclick = HandleMouseClick;
		
		// Create new HTML Table Row Elements and add them to the Table
		for (var i = 0; i < BOARD_SIZE; i++)
		{
			var htmlRowElement = document.createElement('TR');
			
			htmlTableElement.appendChild(htmlRowElement);

			// Create new HTML Cell Elements and add them to the Rows
			for (var j = 0; j < BOARD_SIZE; j++)
			{
				var htmlCellElement = document.createElement('TD');

				htmlRowElement.appendChild(htmlCellElement);
				
				// Set Id of the Cell by Row and Column values for quick access. 
				htmlCellElement.id = i + '_' + j;
				
				// Set the HTML Text Class of the Cell for drawing purposes
				htmlCellElement.className = 'tdStyle';
			}
		}
    }
	
	MarkCell(selectedCell, mark)
	{
		// Return if the Cell is not empty
		if (selectedCell.innerText != '')
			return false;
		
		// Set the Mark for the Cell and disable its Mouse Clicks
		selectedCell.innerHTML = mark;
		selectedCell.classList.add(mark + 'Style');
		selectedCell.classList.add('disabled');
		
		return true;
	}	

	AreEnoughCellsAligned(selectedCell)
	{		
		// Determine the Row and Column from the id of the Target Cell
		var ary = selectedCell.id.split('_');
		var row = parseInt(ary[0]);
		var col = parseInt(ary[1]);
		
		// Check through the row
		var cnt = 0;
		
		for (var j = 0; j < BOARD_SIZE; j++)
		{
			var htmlCellElement = document.getElementById(row + '_' + j);
			
			if (htmlCellElement.innerText == selectedCell.innerText)
				++cnt;
		}
		
		if (cnt >= BOARD_SIZE) 
			return true;
		
		// Check through the column
		cnt = 0;
		
		for (var i = 0; i < BOARD_SIZE; i++)
		{
			var htmlCellElement = document.getElementById(i + '_' + col);
			
			if (htmlCellElement.innerText == selectedCell.innerText)
				++cnt;
		}
		
		if (cnt >= BOARD_SIZE) 
			return true;
		
		// Check through the principal diagonal
		cnt = 0;
		
		if (row == col)
		{
			for (var i = 0; i < BOARD_SIZE; i++)
			{
				var htmlCellElement = document.getElementById(i + '_' + i);
				
				if (htmlCellElement.innerText == selectedCell.innerText)
					++cnt;
			}
		}
		
		if (cnt >= BOARD_SIZE) 
			return true;
				
		// Check through the other diagonal
		cnt = 0;
		
		if ((row + col) == (BOARD_SIZE-1))
		{
			for (var i = 0; i < BOARD_SIZE; i++)
			{
				var htmlCellElement = document.getElementById(i + '_' + (BOARD_SIZE-1-i));
				
				if (htmlCellElement.innerText == selectedCell.innerText)
					++cnt;
			}
		}
		
		if (cnt >= BOARD_SIZE) 
			return true;
				
		return false;
	}
}

// Class Corresponding to Game
class Game
{

	Restart()
	{
		// Initialize properties
		this.m_Board = new Board();

		this.m_CurrentPlayer = PLAYER1;

		this.m_PlayCount = Object();
		this.m_PlayCount[PLAYER1] = 0;
		this.m_PlayCount[PLAYER2] = 0;
	}		

	ChangePlayer()
	{
		// Set the other player's turn
		this.m_CurrentPlayer = (this.m_CurrentPlayer == PLAYER1 ? PLAYER2 : PLAYER1);
	}

	ClaimSelectedCell(selectedCell)
	{
		return this.m_Board.MarkCell(selectedCell, this.m_CurrentPlayer);
	}
	
	IsGameFinished(selectedCell)
	{
		if (++this.m_PlayCount[this.m_CurrentPlayer] >= BOARD_SIZE)
		{
			// If there are enough Cells aligned, the current player won!..
			if (this.m_Board.AreEnoughCellsAligned(selectedCell))
			{
				alert(this.m_CurrentPlayer + ' has won the game');
				return true;
			}
			else if ((this.m_PlayCount[PLAYER1] + this.m_PlayCount[PLAYER2]) == (BOARD_SIZE * BOARD_SIZE))
			{
				alert('Draw!');
				return true;
			}
		}

		return false;
	}
}

var g_Game = new Game();

// Function to handle Mouse Clicks
function HandleMouseClick(e)
{
	// Determine if the Mouse is clicked on an empty Cell
	if (e.target && e.target.nodeName == "TD" && e.target.innerText == '')
	{
		// Return if the Selected Cell can't be claimed by the Current Player
		if (!g_Game.ClaimSelectedCell(e.target))
			return;

		// Change player if the Game is not finished
		if (!g_Game.IsGameFinished(e.target))
			g_Game.ChangePlayer();
	}
}

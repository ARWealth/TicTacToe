#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

    const char PLAYER_X = 'X';
    const char PLAYER_O = 'O';
        char board[3][3] =
    {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'},
    };

void displayBoard()
{
    char lastPlayer = PLAYER_O;
    char currentPlayer = PLAYER_X;
    int chosenSquare=0;


    /*Loop through and display the current board state!*/
    for (chosenSquare; chosenSquare <=INT_MAX; chosenSquare--)
    {
    cout << " " << endl;
    cout << "current board state: "<<endl;
    cout << " " << endl;

    cout << "+-----+" << endl;
    for(int y = 0; y < 3; y++)
    {
        for(int x = 0; x < 3; x++)
        {
            cout << board[y][x]<<"|";

        }
            cout << endl;
    }
    cout <<"+-----+"<<endl;
    cout << " " << endl;
    cout << "Player " << currentPlayer <<" enter a number between 1 and 9: ";
    cin >> chosenSquare;

    // if input is invalid
    if(chosenSquare > 9 || chosenSquare < 1)
        {
        cout << "Not a valid choice. Try Again." <<endl;
        }

    /* check for availability of squares */
    else if(chosenSquare == 1 && (board[0][0]=='X' || board[0][0]=='O'))
        {
        cout<<"That square is not available. Try again." <<endl;
        }
    else if(chosenSquare == 2 && (board[0][1]=='X' || board[0][1]=='O'))
        {
        cout<<"That square is not available. Try again." <<endl;
        }
    else if(chosenSquare == 3 && (board[0][2]=='X' || board[0][2]=='O'))
        {
        cout<<"That square is not available. Try again." <<endl;
        }
    else if(chosenSquare == 4 && (board[1][0]=='X' || board[1][0]=='O'))
        {
        cout<<"That square is not available. Try again." <<endl;
        }
    else if(chosenSquare == 5 && (board[1][1]=='X' || board[1][1]=='O'))
        {
        cout<<"That square is not available. Try again." <<endl;
        }
    else if(chosenSquare == 6 && (board[1][2]=='X' || board[1][2]=='O'))
        {
        cout<<"That square is not available. Try again." <<endl;
        }
    else if(chosenSquare == 7 && (board[2][0]=='X' || board[2][0]=='O'))
        {
        cout<<"That square is not available. Try again." <<endl;
        }
    else if(chosenSquare == 8 && (board[2][1]=='X' || board[2][1]=='O'))
        {
        cout<<"That square is not available. Try again." <<endl;
        }
    else if(chosenSquare == 9 && (board[2][2]=='X' || board[2][2]=='O'))
        {
        cout<<"That square is not available. Try again." <<endl;
        }
    else
        {
    // update the array with the player's input and swap player
    switch (chosenSquare)
    {
        case 1:
            board[0][0] = currentPlayer;
            swap(lastPlayer,currentPlayer);
            break;

        case 2:
            board[0][1] = currentPlayer;
            swap(lastPlayer,currentPlayer);
            break;

        case 3:
            board[0][2] = currentPlayer;
            swap(lastPlayer,currentPlayer);
            break;

        case 4:
            board[1][0] = currentPlayer;
            swap(lastPlayer,currentPlayer);
            break;

        case 5:
            board[1][1] = currentPlayer;
            swap(lastPlayer,currentPlayer);
            break;

        case 6:
            board[1][2] = currentPlayer;
            swap(lastPlayer,currentPlayer);
            break;

        case 7:
            board[2][0] = currentPlayer;
            swap(lastPlayer,currentPlayer);
            break;

        case 8:
            board[2][1] = currentPlayer;
            swap(lastPlayer,currentPlayer);
            break;

        case 9:
            board[2][2] = currentPlayer;
            swap(lastPlayer,currentPlayer);
            break;

        default:
            break;
        }

    /*check for winning conditions*/

       if(board[0][0]==currentPlayer && board[0][1]==currentPlayer && board[0][2]==currentPlayer)
          {
            cout<<"Player "<<currentPlayer<<" wins on the top row"<<endl;
            break;
          }
       if(board[1][0]==currentPlayer && board[1][1]==currentPlayer && board[1][2]==currentPlayer)
          {
            cout<<"Player "<<currentPlayer<<" wins on the middle row"<<endl;
            break;
          }
        if(board[2][0]==currentPlayer && board[2][1]==currentPlayer && board[2][2]==currentPlayer)
          {
            cout<<"Player "<<currentPlayer<<" wins on the last row"<<endl;
            break;
          }
        if(board[0][0]==currentPlayer && board[1][0]==currentPlayer && board[2][0]==currentPlayer)
          {
            cout<<"Player "<<currentPlayer<<" wins on the first column"<<endl;
            break;
          }
        if(board[0][1]==currentPlayer && board[1][1]==currentPlayer && board[2][1]==currentPlayer)
          {
            cout<<"Player "<<currentPlayer<<" wins on the second column"<<endl;
            break;
          }
        if(board[0][2]==currentPlayer && board[1][2]==currentPlayer && board[2][2]==currentPlayer)
          {
            cout<<"Player "<<currentPlayer<<" wins on the third column"<<endl;
            break;
          }
        if(board[0][0]==currentPlayer && board[1][1]==currentPlayer && board[2][2]==currentPlayer)
          {
            cout<<"Player "<<currentPlayer<<" wins diagonally"<<endl;
            break;
          }
        if(board[0][2]==currentPlayer && board[1][1]==currentPlayer && board[2][0]==currentPlayer)
          {
            cout<<"Player "<<currentPlayer<<" wins diagonally"<<endl;
            break;
          }
        // check for stalemate
        if((board[0][0]== 'X'|| board[0][0]=='O')&& (board[0][1]== 'X'|| board[0][1]=='O') && (board[0][2]== 'X'|| board[0][2]=='O')
           && (board[1][0]== 'X'|| board[1][0]=='O') && (board[1][1]== 'X'|| board[1][1]=='O') && (board[1][2]== 'X'|| board[1][2]=='O')
           && (board[2][0]== 'X'|| board[2][0]=='O') && (board[2][1]== 'X'|| board[2][1]=='O') && (board[2][2]== 'X'|| board[2][2]=='O'))
          {
            cout<<"Stalemate!"<<endl;
            break;
          }
        }
    }
    // line breaks
    cout<<" "<<endl;
    cout<<" "<<endl;
}
int main()
{
    cout<<"Welcome to my TicTacToe game. Developed in C++ by Uchenna Adubasim."<<endl;
    displayBoard();
    return 0;
}

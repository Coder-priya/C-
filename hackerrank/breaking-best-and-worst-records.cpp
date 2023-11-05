/*
Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.

Function Description:
Complete the breakingRecords function in the editor below.
breakingRecords has the following parameter(s):
int scores[n]: points scored per game

Returns:
int[2]: An array with the numbers of times she broke her records. Index is for breaking most points records, and index is for breaking least points records.
*/

vector<int> breakingRecords(vector<int> scores) {
    int lowest = scores[0], highest = scores[0], lowestCount = 0, highestCount = 0;
    for(int score: scores){
        if(score < lowest){lowestCount++; lowest = score;}
        if(score > highest){highestCount++; highest = score;}
    }
    return {highestCount, lowestCount};
}

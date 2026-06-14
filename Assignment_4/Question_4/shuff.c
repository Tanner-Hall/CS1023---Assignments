#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52
#define HAND_SIZE 5

void shuffle(int deck[][FACES]);
void dealHand(int deck[][FACES], int handFaces[], int handSuits[]);
void printHand(const int handFaces[], const int handSuits[], const char *face[], const char *suit[]);
int hasOnePair(const int faceCounts[]);
int hasTwoPairs(const int faceCounts[]);
int hasThreeOfAKind(const int faceCounts[]);
int hasFourOfAKind(const int faceCounts[]);
int hasFlush(const int suitCounts[]);
int hasStraight(const int faceCounts[]);
void evaluateHand(const int handFaces[], const int handSuits[], const char *title);

int main(void) {
    int deck[SUITS][FACES] = {0};
    srand(time(NULL));
    shuffle(deck);
    const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *face[FACES] = {"Ace", "Deuce", "Three", "Four", "Five",
                               "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    int handFaces[HAND_SIZE];
    int handSuits[HAND_SIZE];
    dealHand(deck, handFaces, handSuits);
    printf("RANDOMLY DEALT POKER HAND\n");
    printHand(handFaces, handSuits, face, suit);
    evaluateHand(handFaces, handSuits, "Random Hand Analysis");
    printf("\n");
    printf("RUNNING EVALUATOR TEST CASES\n");
    int pairFaces[HAND_SIZE] = {1, 1, 4, 8, 12};
    int pairSuits[HAND_SIZE] = {0, 1, 2, 3, 0};
    evaluateHand(pairFaces, pairSuits, "Test 1: Exactly One Pair");
    int twoPairFaces[HAND_SIZE] = {2, 2, 10, 10, 5}; 
    int twoPairSuits[HAND_SIZE] = {0, 1, 2, 3, 0};
    evaluateHand(twoPairFaces, twoPairSuits, "Test 2: Two Pairs");
    int threeFaces[HAND_SIZE] = {0, 0, 0, 9, 11};
    int threeSuits[HAND_SIZE] = {0, 1, 2, 3, 0};
    evaluateHand(threeFaces, threeSuits, "Test 3: Three of a Kind");
    int fourFaces[HAND_SIZE] = {12, 12, 12, 12, 0}; 
    int fourSuits[HAND_SIZE] = {0, 1, 2, 3, 0};
    evaluateHand(fourFaces, fourSuits, "Test 4: Four of a Kind");
    int flushFaces[HAND_SIZE] = {2, 4, 7, 9, 11};
    int flushSuits[HAND_SIZE] = {0, 0, 0, 0, 0}; 
    evaluateHand(flushFaces, flushSuits, "Test 5: Flush");
    int straightFaces[HAND_SIZE] = {9, 10, 11, 12, 0}; 
    int straightSuits[HAND_SIZE] = {0, 1, 2, 3, 0};
    evaluateHand(straightFaces, straightSuits, "Test 6: Straight (Ace High)");
    return 0;
}

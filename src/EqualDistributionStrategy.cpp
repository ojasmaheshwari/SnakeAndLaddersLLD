//
// Created by epicman on 3/19/26.
//

#include "EqualDistributionStrategy.h"

EqualDistributionStrategy::EqualDistributionStrategy() {}

// Divides the board into 2n equal zones of size n/2.
// Places one ladder per zone in the lower half (start in zone, end ~n/2 cells ahead).
// Places one snake per zone in the upper half (head in zone, tail ~n/2 cells behind).
std::vector<BoardEntity> EqualDistributionStrategy::create(int n) {
    std::vector<BoardEntity> boardEntities;
    int total = n * n;
    int zoneSize = total / (2 * n);
    if (zoneSize < 1) zoneSize = 1;
    int span = zoneSize * (n / 2);
    if (span < 1) span = 1;

    for (int i = 0; i < n; i++) {
        // Ladder: starts spread across lower half, ends span cells higher
        int lStart = 2 + i * zoneSize;
        int lEnd = lStart + span;
        if (lEnd > total) lEnd = total;
        boardEntities.emplace_back(lStart, lEnd);

        // Snake: heads spread across upper half, tails span cells lower
        int sHead = total - 1 - i * zoneSize;
        int sTail = sHead - span;
        if (sTail < 1) sTail = 1;
        boardEntities.emplace_back(sHead, sTail);
    }

    return boardEntities;
}
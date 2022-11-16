#ifndef _PARAM_H_
#define _PARAM_H_

/* GAのパラメータ郡 */
#define POP 300		/* 個体数 */

#define GAP 0.95  /* 一回の生殖で子供と入れ替わる割合 */
#define ELITE_RATE 1.0  /* そのまま残る数のうち、エリートの割合 */
#define P_MUTATE 0.1  /* 突然変異率。LENGTHの逆数程度がよい */
#define P_CROSS 0.7		/* 交叉確率 */
#define GENERATION 30		/* 計算する世代数 */
#define SELECTION_METHOD 2 /* 1はルーレット 2はトーナメント*/
#define TOURNAMENT_SIZE 5	/* トーナメントサイズ。トーナメントの時だけ意味がある  */

/* 出力 */
#define PRINT_GROUP 1
#define PRINT_FITNESS 1

#endif

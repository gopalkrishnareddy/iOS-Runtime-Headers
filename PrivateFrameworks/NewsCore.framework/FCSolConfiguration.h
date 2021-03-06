/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSolConfiguration : NSObject {
    double  _articleEntityScoreWeightRatio;
    int  _heuristicOption;
    unsigned int  _heuristicSampleSize;
    double  _importanceScalar;
    unsigned int  _maxArticleCombos;
    double  _searchBranchDecay;
    unsigned int  _searchBranchMultiplier;
    double  _searchTimeLimit;
    double  _tagArticleScoreCoeff;
    double  _tagFavoritedCoeff;
    double  _tagPersonalizationCoeff;
    double  _tagSizeCoeff;
    double  _utilityWeightAlpha;
    double  _utilityWeightBeta;
}

@property (nonatomic, readonly) double articleEntityScoreWeightRatio;
@property (nonatomic, readonly) int heuristicOption;
@property (nonatomic, readonly) unsigned int heuristicSampleSize;
@property (nonatomic, readonly) double importanceScalar;
@property (nonatomic, readonly) unsigned int maxArticleCombos;
@property (nonatomic, readonly) double searchBranchDecay;
@property (nonatomic, readonly) unsigned int searchBranchMultiplier;
@property (nonatomic, readonly) double searchTimeLimit;
@property (nonatomic, readonly) double tagArticleScoreCoeff;
@property (nonatomic, readonly) double tagFavoritedCoeff;
@property (nonatomic, readonly) double tagPersonalizationCoeff;
@property (nonatomic, readonly) double tagSizeCoeff;
@property (nonatomic, readonly) double utilityWeightAlpha;
@property (nonatomic, readonly) double utilityWeightBeta;

+ (id)configurationWithTreatment:(id)arg1;

- (double)articleEntityScoreWeightRatio;
- (int)heuristicOption;
- (unsigned int)heuristicSampleSize;
- (double)importanceScalar;
- (id)initWithHeuristicSampleSize:(unsigned int)arg1 searchBranchMultiplier:(unsigned int)arg2 searchBranchDecay:(double)arg3 searchTimeLimit:(double)arg4 tagSizeCoeff:(double)arg5 tagFavoritedCoeff:(double)arg6 tagArticleScoreCoeff:(double)arg7 tagPersonalizationCoeff:(double)arg8 articleEntityScoreWeightRatio:(double)arg9 utilityWeightAlpha:(double)arg10 utilityWeightBeta:(double)arg11 importanceScalar:(double)arg12 heuristicOption:(int)arg13;
- (unsigned int)maxArticleCombos;
- (double)searchBranchDecay;
- (unsigned int)searchBranchMultiplier;
- (double)searchTimeLimit;
- (double)tagArticleScoreCoeff;
- (double)tagFavoritedCoeff;
- (double)tagPersonalizationCoeff;
- (double)tagSizeCoeff;
- (double)utilityWeightAlpha;
- (double)utilityWeightBeta;

@end

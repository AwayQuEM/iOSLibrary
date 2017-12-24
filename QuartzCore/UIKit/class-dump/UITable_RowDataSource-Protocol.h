//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITable.h"

@class NSIndexPath, NSString, UIView;

@protocol UITable_RowDataSource <UITable>
@property(readonly, nonatomic, getter=_shouldUseNewHeaderFooterBehavior) _Bool shouldUseNewHeaderFooterBehavior;
@property(readonly, nonatomic, getter=_shouldUseSearchBarHeaderBehavior) _Bool shouldUseSearchBarHeaderBehavior;
@property(readonly, nonatomic, getter=_tableFooterView) UIView *tableFooterView;
@property(readonly, nonatomic, getter=_tableHeaderView) UIView *tableHeaderView;
@property(readonly, nonatomic, getter=_estimatesSectionFooterHeights) _Bool estimatesSectionFooterHeights;
@property(readonly, nonatomic, getter=_estimatesSectionHeaderHeights) _Bool estimatesSectionHeaderHeights;
@property(readonly, nonatomic, getter=_estimatesRowHeights) _Bool estimatesRowHeights;
@property(readonly, nonatomic, getter=_estimatesHeights) _Bool estimatesHeights;
@property(readonly, nonatomic, getter=_providesRowHeights) _Bool providesRowHeights;
@property(readonly, nonatomic, getter=_heightForTableFooter) double heightForTableFooter;
@property(readonly, nonatomic, getter=_heightForTableHeader) double heightForTableHeader;
@property(readonly, nonatomic, getter=_isTableHeaderAutohiding) _Bool isTableHeaderAutohiding;
@property(readonly, nonatomic, getter=_rowSpacing) double rowSpacing;
@property(readonly, nonatomic, getter=_tableContentInset) struct UIEdgeInsets tableContentInset;
@property(readonly, nonatomic, getter=_contentInset) struct UIEdgeInsets _contentInset;
@property(readonly, nonatomic, getter=_sidePadding) double sidePadding;
@property(readonly, nonatomic, getter=_defaultSectionFooterHeight) double defaultSectionFooterHeight;
@property(readonly, nonatomic, getter=_defaultSectionHeaderHeight) double defaultSectionHeaderHeight;
@property(readonly, nonatomic, getter=_headerFooterTrailingMarginWidth) double headerFooterTrailingMarginWidth;
@property(readonly, nonatomic, getter=_headerFooterLeadingMarginWidth) double headerFooterLeadingMarginWidth;
@property(readonly, nonatomic, getter=_constants) id <UITableConstants> constants;
- (void)_setHeight:(double)arg1 forRowAtIndexPath:(NSIndexPath *)arg2 usingPresentationValues:(_Bool)arg3;
- (double)_swipeToDeleteOffsetForRow:(long long)arg1 inSection:(long long)arg2;
- (_Bool)_shouldStripHeaderTopPaddingForSection:(long long)arg1;
- (double)_maxTitleWidthForFooterInSection:(long long)arg1;
- (double)_maxTitleWidthForHeaderInSection:(long long)arg1;
- (long long)_titleAlignmentForFooterInSection:(long long)arg1;
- (long long)_titleAlignmentForHeaderInSection:(long long)arg1;
- (UIView *)_viewForFooterInSection:(long long)arg1;
- (UIView *)_viewForHeaderInSection:(long long)arg1;
- (NSString *)_detailTextForHeaderInSection:(long long)arg1;
- (NSString *)_titleForFooterInSection:(long long)arg1;
- (NSString *)_titleForHeaderInSection:(long long)arg1;
- (void)_coalesceContentSizeUpdateWithDelta:(double)arg1;
- (void)_applyContentSizeDeltaForEstimatedHeightAdjustments:(double)arg1;
- (double)_dataSourceHeightForFooterInSection:(long long)arg1;
- (double)_dataSourceHeightForHeaderInSection:(long long)arg1;
- (double)_dataSourceHeightForRowAtIndexPath:(NSIndexPath *)arg1;
- (double)_estimatedHeightForFooterInSection:(long long)arg1;
- (double)_estimatedHeightForHeaderInSection:(long long)arg1;
- (double)_estimatedHeightForRowAtIndexPath:(NSIndexPath *)arg1;
- (double)_heightForFooterInSection:(long long)arg1;
- (double)_heightForHeaderInSection:(long long)arg1;
- (double)_heightForRowAtIndexPath:(NSIndexPath *)arg1;
@end


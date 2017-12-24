//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSIndexPath, UITableViewHeaderFooterView;

__attribute__((visibility("hidden")))
@interface UITableViewRowData : NSObject <NSCopying>
{
    id <UITable_RowDataSource> _tableView;
    long long _numSections;
    long long _sectionRowDataCapacity;
    id *_sectionRowData;
    UITableViewHeaderFooterView *_headerFooterViewUsedForMeasurements;
    double _minimumRowHeight;
    double _rowSpacing;
    double _tableViewWidth;
    double _tableHeaderHeight;
    double _tableFooterHeight;
    double _heightForTableHeaderViewHiding;
    double _tableTopPadding;
    double _tableBottomPadding;
    double _tableSidePadding;
    struct {
        unsigned int tableHeaderHeightValid:1;
        unsigned int tableFooterHeightValid:1;
        unsigned int tableSidePaddingValid:1;
        unsigned int usesVariableMargins:1;
        unsigned int pinsTableHeaderView:1;
    } _rowDataFlags;
    NSIndexPath *_gapIndexPath;
    NSIndexPath *_reorderedIndexPath;
    NSIndexPath *_draggedIndexPath;
    double _defaultSectionHeaderHeight;
    double _defaultSectionFooterHeight;
    double _gapRowHeight;
    double _draggedRowHeight;
}

@property(nonatomic) double draggedRowHeight; // @synthesize draggedRowHeight=_draggedRowHeight;
@property(nonatomic) double gapRowHeight; // @synthesize gapRowHeight=_gapRowHeight;
@property(readonly, nonatomic) double defaultSectionFooterHeight; // @synthesize defaultSectionFooterHeight=_defaultSectionFooterHeight;
@property(readonly, nonatomic) double defaultSectionHeaderHeight; // @synthesize defaultSectionHeaderHeight=_defaultSectionHeaderHeight;
@property(retain, nonatomic) NSIndexPath *draggedIndexPath; // @synthesize draggedIndexPath=_draggedIndexPath;
@property(retain, nonatomic) NSIndexPath *reorderedIndexPath; // @synthesize reorderedIndexPath=_reorderedIndexPath;
@property(retain, nonatomic) NSIndexPath *gapIndexPath; // @synthesize gapIndexPath=_gapIndexPath;
@property(nonatomic) double tableBottomPadding; // @synthesize tableBottomPadding=_tableBottomPadding;
@property(nonatomic) double tableTopPadding; // @synthesize tableTopPadding=_tableTopPadding;
@property(nonatomic) double rowSpacing; // @synthesize rowSpacing=_rowSpacing;
@property(nonatomic) double minimumRowHeight; // @synthesize minimumRowHeight=_minimumRowHeight;
- (void).cxx_destruct;
- (long long)sectionForSectionRowData:(id)arg1;
- (_Bool)ensureHeightsFaultedInForScrollToIndexPath:(id)arg1 withScrollPosition:(long long)arg2 boundsHeight:(double)arg3;
- (void)_assertValidIndexPath:(id)arg1 allowEmptySection:(_Bool)arg2;
- (id)_previousIndexPathOrSectionHeader:(id)arg1;
- (id)_nextIndexPathOrSectionHeader:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)maxFooterTitleWidthForSection:(long long)arg1;
- (double)maxHeaderTitleWidthForSection:(long long)arg1;
- (long long)footerAlignmentForSection:(long long)arg1;
- (long long)headerAlignmentForSection:(long long)arg1;
- (id)indexPathForRowAtGlobalRow:(long long)arg1;
- (long long)globalRowForRowAtIndexPath:(id)arg1;
- (struct _NSRange)sectionsInRect:(struct CGRect)arg1;
- (long long)sectionForPoint:(struct CGPoint)arg1;
- (long long)_sectionForPoint:(struct CGPoint)arg1 beginningWithSection:(long long)arg2 numberOfSections:(long long)arg3;
- (struct _NSRange)globalRowsInRect:(struct CGRect)arg1 canGuess:(_Bool)arg2;
- (id)indexPathsForRowsInRect:(struct CGRect)arg1;
- (id)indexPathsForRowsInRect:(struct CGRect)arg1 extraHitSpaceBetweenRows:(double)arg2;
- (struct CGRect)rectForGlobalRow:(long long)arg1 heightCanBeGuessed:(_Bool)arg2;
- (struct CGRect)rectForRow:(long long)arg1 inSection:(long long)arg2 heightCanBeGuessed:(_Bool)arg3;
- (struct CGRect)floatingRectForFooterInSection:(long long)arg1 visibleRect:(struct CGRect)arg2 heightCanBeGuessed:(_Bool)arg3;
- (double)heightForTable;
- (struct CGRect)rectForFooterInSection:(long long)arg1 heightCanBeGuessed:(_Bool)arg2;
- (struct CGRect)floatingRectForHeaderInSection:(long long)arg1 visibleRect:(struct CGRect)arg2 heightCanBeGuessed:(_Bool)arg3;
- (struct CGRect)rectForHeaderInSection:(long long)arg1 heightCanBeGuessed:(_Bool)arg2;
- (struct CGRect)rectForSection:(long long)arg1;
- (struct CGRect)rectForTable;
- (struct CGRect)rectForTableFooterView;
- (struct CGRect)rectForTableHeaderView;
@property(nonatomic) double tableSidePadding; // @synthesize tableSidePadding=_tableSidePadding;
- (int)sectionLocationForReorderedRow:(long long)arg1 inSection:(long long)arg2;
- (int)sectionLocationForRow:(long long)arg1 inSection:(long long)arg2;
- (void)setHeight:(double)arg1 forRowAtIndexPath:(id)arg2;
- (double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(_Bool)arg3 adjustForReorderedRow:(_Bool)arg4;
- (double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(_Bool)arg3;
- (double)heightForFooterInSection:(long long)arg1 canGuess:(_Bool)arg2;
- (double)heightForHeaderInSection:(long long)arg1 canGuess:(_Bool)arg2;
- (double)offsetForSection:(id)arg1;
- (double)heightForSection:(long long)arg1;
- (double)heightForTableFooterView;
@property(readonly, nonatomic) double heightForTableHeaderViewHiding;
@property(readonly, nonatomic) double heightForAutohidingTableHeaderView;
- (void)setHeightForTableHeaderViewHiding:(double)arg1;
- (double)heightForTableHeaderView;
- (_Bool)shouldStripHeaderTopPaddingForSection:(long long)arg1;
- (_Bool)hasFooterForSection:(long long)arg1;
- (_Bool)hasHeaderForSection:(long long)arg1;
- (long long)numberOfRows;
- (long long)numberOfRowsBeforeSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)removeDropTargetGap;
- (void)moveDropTargetGapToIndexPath:(id)arg1;
- (void)addDropTargetGapAtIndexPath:(id)arg1;
- (double)_dropTargetGapHeightForIndexPath:(id)arg1;
- (void)moveRowAtIndexPathFrom:(id)arg1 toIndexPath:(id)arg2;
- (struct CGRect)rectForGap;
- (double)removeReorderedRowWithHeight:(double)arg1 atIndexPath:(id)arg2;
- (void)restoreReorderedRowWithHeight:(double)arg1 atIndexPath:(id)arg2;
@property(readonly, nonatomic) NSIndexPath *temporarilyDeletedIndexPathBeingReordered;
- (void)removeGap;
- (void)addGapAtIndexPath:(id)arg1;
- (long long)dropLocationForPoint:(struct CGPoint)arg1 atIndexPath:(id)arg2 withInsets:(struct UIEdgeInsets)arg3;
- (id)targetIndexPathForPoint:(struct CGPoint)arg1 adjustedForGap:(_Bool)arg2;
- (void)invalidateSection:(long long)arg1;
- (void)invalidateAllSectionOffsetsAndUpdatePadding;
- (void)invalidateAllSections;
- (void)_updateTopAndBottomPadding;
- (void)ensureAllSectionsAreValid;
- (void)tableFooterHeightDidChangeToHeight:(double)arg1;
- (void)tableHeaderHeightDidChangeToHeight:(double)arg1;
- (void)adjustSectionOffsetsBeginningAtIndex:(long long)arg1 count:(long long)arg2 delta:(double)arg3 rowDelta:(long long)arg4;
- (void)tableViewWidthDidChangeToWidth:(double)arg1;
- (long long)_sectionRowForGlobalRow:(long long)arg1 inSection:(long long *)arg2;
- (void)_ensureSectionOffsetIsValidForSection:(long long)arg1;
- (void)_updateSectionRowDataArrayForNumSections:(long long)arg1;
- (void)_updateNumSections;
@property(nonatomic) _Bool pinsTableHeaderView;
@property(nonatomic) _Bool usesVariableMargins;
- (void)dealloc;
- (id)initWithTableView:(id)arg1;

@end


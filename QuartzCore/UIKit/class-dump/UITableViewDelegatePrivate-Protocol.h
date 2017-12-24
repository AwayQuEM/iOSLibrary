//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewDelegate.h"
#import "UITableViewFocusDelegateLegacy.h"

@class NSArray, NSIndexPath, NSString, UIColor, UITableView, UITableViewCell, UIView, _UITableViewCellActionButton;

@protocol UITableViewDelegatePrivate <UITableViewDelegate, UITableViewFocusDelegateLegacy>
- (_Bool)_tableView:(UITableView *)arg1 shouldSpringLoadRowAtIndexPath:(NSIndexPath *)arg2 withContext:(id <UISpringLoadedInteractionContext>)arg3;
- (long long)tableView:(UITableView *)arg1 titleAlignmentForFooterInSection:(long long)arg2;
- (long long)tableView:(UITableView *)arg1 titleAlignmentForHeaderInSection:(long long)arg2;
- (double)marginForTableView:(UITableView *)arg1;
- (void)tableView:(UITableView *)arg1 didUpdateTextFieldForRowAtIndexPath:(NSIndexPath *)arg2 withValue:(NSString *)arg3;
- (struct CGPoint)tableView:(UITableView *)arg1 newContentOffsetAfterUpdate:(struct CGPoint)arg2 context:(id)arg3;
- (double)tableViewSpacingForExtraSeparators:(UITableView *)arg1;
- (_Bool)tableView:(UITableView *)arg1 wantsHeaderForSection:(long long)arg2;

@optional
- (void)tableView:(UITableView *)arg1 didEndSwipingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 willBeginSwipingRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (_Bool)tableView:(UITableView *)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)tableView:(UITableView *)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (UIColor *)tableView:(UITableView *)arg1 backgroundColorForSwipeAccessoryButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (UIColor *)tableView:(UITableView *)arg1 backgroundColorForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (_UITableViewCellActionButton *)tableView:(UITableView *)arg1 swipeAccessoryButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (_UITableViewCellActionButton *)tableView:(UITableView *)arg1 deleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didCancelReorderingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didEndReorderingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 willBeginReorderingRowAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)tableView:(UITableView *)arg1 trailingSwipeActionsForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)tableView:(UITableView *)arg1 leadingSwipeActionsForRowAtIndexPath:(NSIndexPath *)arg2;
- (struct CGRect)tableView:(UITableView *)arg1 calloutTargetRectForCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)_tableView:(UITableView *)arg1 willLayoutCell:(UITableViewCell *)arg2 usingTemplateLayoutCell:(UITableViewCell *)arg3 forRowAtIndexPath:(NSIndexPath *)arg4;
- (UITableViewCell *)_tableView:(UITableView *)arg1 templateLayoutCellForCellsWithReuseIdentifier:(NSString *)arg2;
- (UIView *)viewForFooterInTableView:(UITableView *)arg1;
- (UIView *)viewForHeaderInTableView:(UITableView *)arg1;
- (double)heightForFooterInTableView:(UITableView *)arg1;
- (double)heightForHeaderInTableView:(UITableView *)arg1;
- (void)tableViewDidFinishReload:(UITableView *)arg1;
- (struct CGRect)tableView:(UITableView *)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect)arg2;
- (double)tableView:(UITableView *)arg1 maxTitleWidthForFooterInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 maxTitleWidthForHeaderInSection:(long long)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, _UITableViewCellActionButton;

__attribute__((visibility("hidden")))
@interface UITableViewCellDeleteConfirmationView : UIView
{
    double _visibleWidth;
    struct CGSize _contentSize;
    double _visibleHeightRatio;
    double _cornerRadius;
    int _sectionLocation;
    _UITableViewCellActionButton *_deleteView;
    _UITableViewCellActionButton *_accessoryView;
    NSArray *_actionButtons;
}

@property(nonatomic) int sectionLocation; // @synthesize sectionLocation=_sectionLocation;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) _UITableViewCellActionButton *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) _UITableViewCellActionButton *deleteView; // @synthesize deleteView=_deleteView;
@property(nonatomic) double visibleHeightRatio; // @synthesize visibleHeightRatio=_visibleHeightRatio;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) double visibleWidth; // @synthesize visibleWidth=_visibleWidth;
- (void).cxx_destruct;
- (void)updateBounds;
- (void)updateMaskView:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 actionButtons:(id)arg2 contentSize:(struct CGSize)arg3;

@end


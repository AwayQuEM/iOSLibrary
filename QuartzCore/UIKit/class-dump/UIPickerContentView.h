//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface UIPickerContentView : UIView
{
    UILabel *_titleLabel;
    UIImageView *_checkView;
    struct {
        unsigned int checked:1;
        unsigned int highlighted:1;
    } _pickerContentViewFlags;
}

+ (double)_checkmarkOffset;
- (void).cxx_destruct;
- (_Bool)_isSelectable;
- (double)labelWidthForBounds:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *titleLabel;
@property(nonatomic, getter=isChecked) _Bool checked;
- (id)checkedColor;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIStoryboardSegueTemplate.h>

@class NSArray, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate
{
    unsigned long long _permittedArrowDirections;
    NSArray *_passthroughViews;
    UIView *_anchorView;
    UIBarButtonItem *_anchorBarButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *anchorBarButtonItem; // @synthesize anchorBarButtonItem=_anchorBarButtonItem;
@property(retain, nonatomic) UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
- (void).cxx_destruct;
- (id)segueWithDestinationViewController:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


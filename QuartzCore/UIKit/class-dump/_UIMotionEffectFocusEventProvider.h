//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIMotionEffectEventProvider.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectFocusEventProvider : _UIMotionEffectEventProvider
{
    _Bool _isGeneratingEvents;
    struct CGPoint _focusPosition;
    struct CGPoint _lastReportedPosition;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (void)initialize;
@property(nonatomic) struct CGPoint focusPosition;
- (id)currentEvent;
- (void)stopGeneratingEvents;
- (void)startGeneratingEvents;
- (_Bool)wantsSynchronizedUpdates;
- (id)init;

@end


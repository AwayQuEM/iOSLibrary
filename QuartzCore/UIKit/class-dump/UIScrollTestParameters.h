//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSString;

__attribute__((visibility("hidden")))
@interface UIScrollTestParameters : NSObject
{
    int _iterations;
    int _delta;
    int _scrollLength;
    float _startOffset;
    NSString *_currentTest;
    int _axis;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _extraResultsBlock;
}

@property(copy, nonatomic) CDUnknownBlockType extraResultsBlock; // @synthesize extraResultsBlock=_extraResultsBlock;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSString *currentTest; // @synthesize currentTest=_currentTest;
@property(nonatomic) int axis; // @synthesize axis=_axis;
@property(nonatomic) float startOffset; // @synthesize startOffset=_startOffset;
@property(nonatomic) int scrollLength; // @synthesize scrollLength=_scrollLength;
@property(nonatomic) int delta; // @synthesize delta=_delta;
@property(nonatomic) int iterations; // @synthesize iterations=_iterations;
- (void).cxx_destruct;
@property(readonly, nonatomic) float endOffset;
- (void)dealloc;
- (id)initWithName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 startOffset:(float)arg5 scrollAxis:(int)arg6;

@end


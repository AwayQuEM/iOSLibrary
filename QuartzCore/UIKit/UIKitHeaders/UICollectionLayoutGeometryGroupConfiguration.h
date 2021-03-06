//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionLayoutGeometryGroupConfiguration.h"

@class NSArray, NSString, UICollectionLayoutGeometryGroupItemConfiguration;

@interface UICollectionLayoutGeometryGroupConfiguration : NSObject <UICollectionLayoutGeometryGroupConfiguration>
{
    _Bool _heightSizedToContentHeight;
    _Bool _heightSizedToContainerHeight;
    _Bool _widthSizedToContentWidth;
    _Bool _widthSizedToContainerWidth;
    _Bool _alignJustified;
    _Bool _alignOrthogonallyCentered;
    _Bool _verticalGroup;
    _Bool _horizontalGroup;
    _Bool _gridGroup;
    double _height;
    double _heightSizedToContainerHeightFactor;
    long long _repeatCount;
    double _width;
    double _widthSizedToContainerWidthFactor;
    double _interitemSpacing;
    double _lineSpacing;
    long long _maximumNumberOfItems;
    UICollectionLayoutGeometryGroupItemConfiguration *_defaultItemConfiguration;
    NSArray *_customItemConfigurations;
    long long _gridColumns;
    long long _gridRows;
    struct UIEdgeInsets _contentInsets;
}

+ (id)gridGroupWithRows:(long long)arg1 columns:(long long)arg2;
+ (id)gridGroup;
+ (id)horizontalGroup;
+ (id)verticalGroup;
@property(nonatomic) long long gridRows; // @synthesize gridRows=_gridRows;
@property(nonatomic) long long gridColumns; // @synthesize gridColumns=_gridColumns;
@property(nonatomic, getter=isGridGroup) _Bool gridGroup; // @synthesize gridGroup=_gridGroup;
@property(nonatomic, getter=isHorizontalGroup) _Bool horizontalGroup; // @synthesize horizontalGroup=_horizontalGroup;
@property(nonatomic, getter=isVerticalGroup) _Bool verticalGroup; // @synthesize verticalGroup=_verticalGroup;
@property(copy, nonatomic) NSArray *customItemConfigurations; // @synthesize customItemConfigurations=_customItemConfigurations;
@property(retain, nonatomic) UICollectionLayoutGeometryGroupItemConfiguration *defaultItemConfiguration; // @synthesize defaultItemConfiguration=_defaultItemConfiguration;
@property(nonatomic) long long maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
@property(nonatomic) _Bool alignOrthogonallyCentered; // @synthesize alignOrthogonallyCentered=_alignOrthogonallyCentered;
@property(nonatomic) _Bool alignJustified; // @synthesize alignJustified=_alignJustified;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double widthSizedToContainerWidthFactor; // @synthesize widthSizedToContainerWidthFactor=_widthSizedToContainerWidthFactor;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) _Bool widthSizedToContainerWidth; // @synthesize widthSizedToContainerWidth=_widthSizedToContainerWidth;
@property(nonatomic) _Bool widthSizedToContentWidth; // @synthesize widthSizedToContentWidth=_widthSizedToContentWidth;
@property(nonatomic) long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) double heightSizedToContainerHeightFactor; // @synthesize heightSizedToContainerHeightFactor=_heightSizedToContainerHeightFactor;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool heightSizedToContainerHeight; // @synthesize heightSizedToContainerHeight=_heightSizedToContainerHeight;
@property(nonatomic) _Bool heightSizedToContentHeight; // @synthesize heightSizedToContentHeight=_heightSizedToContentHeight;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_resetGroupStyle;
- (void)_resetWidth;
- (void)_resetHeight;
@property(readonly, nonatomic) NSArray *itemConfigurations;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//  WaterFlowLayout.h
//  瀑布流
//
//  Created by BJyhc on 2017/6/7.
//  Copyright © 2017年 blue@circle. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WaterFlowLayout;

@protocol WaterFlowLayoutDelegate <NSObject>

@required
- (CGFloat)WaterFlowLayout:(WaterFlowLayout *)WaterFlowLayout heightForRowAtIndexPath:(NSInteger)index itemWidth:(CGFloat)itemWidth;

@optional
- (CGFloat)columnCountInWaterflowLayout:(WaterFlowLayout *)waterflowLayout;
- (CGFloat)columnMarginInWaterflowLayout:(WaterFlowLayout *)waterflowLayout;
- (CGFloat)rowMarginInWaterflowLayout:(WaterFlowLayout *)waterflowLayout;
- (UIEdgeInsets)edgeInsetsInWaterflowLayout:(WaterFlowLayout *)waterflowLayout;

@end
@interface WaterFlowLayout : UICollectionViewLayout
@property (nonatomic ,weak) id<WaterFlowLayoutDelegate> delegate;
@end

//
//  ShopCollectionViewCell.m
//  瀑布流
//
//  Created by BJyhc on 2017/6/7.
//  Copyright © 2017年 blue@circle. All rights reserved.
//

#import "ShopCollectionViewCell.h"
#import "Shop.h"
#import "UIImageView+WebCache.h"

@interface ShopCollectionViewCell ()
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLab;

@end

@implementation ShopCollectionViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setModel:(Shop *)model
{
    _model = model;
    [self.imageView sd_setImageWithURL:[NSURL URLWithString:model.img] placeholderImage:[UIImage imageNamed:@"loading"]];
    self.titleLab.text = model.price;
    
}
@end

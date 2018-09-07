//
//  DrugstoreCell.h
//  yaolianti-c
//
//  Created by huangliwen on 2018/7/26.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DrugstoreStruce;
typedef void (^onSQQYBlock)(DrugstoreStruce *model);
@interface DrugstoreCell : UITableViewCell
- (void)reloadDataWithModel:(DrugstoreStruce *)model;
-(void)setOnSQQYBlock:(onSQQYBlock)block;
@end

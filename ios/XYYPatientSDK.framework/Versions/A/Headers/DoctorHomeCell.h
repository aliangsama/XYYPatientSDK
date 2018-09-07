//
//  DoctorHomeCell.h
//  yaolianti-c
//
//  Created by huangliwen on 2018/7/18.
//  Copyright © 2018年 hlw. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DoctorStruce;
typedef void (^onSQKDBlock)(DoctorStruce *model);
@interface DoctorHomeCell : UITableViewCell
- (void)reloadDataWithModel:(DoctorStruce*)model;
-(void)setOnSQKDBlock:(onSQKDBlock)block;
@end

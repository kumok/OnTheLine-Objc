//
//  PhotoTableViewCell.h
//  OnTheLine-Objc
//
//  Created by Joshua Howland on 1/28/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoTableViewCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UILabel *userName;
@property (nonatomic, strong) IBOutlet UIImageView *photoImageView;
@property (nonatomic, strong) IBOutlet UILabel *creationDate;
@property (nonatomic, strong) IBOutlet UILabel *firstMessage;

- (void)updateWithPhotoId:(NSString *)photoId;
- (void)updateWIthPhotoURL:(NSString *)photoURL;

@end
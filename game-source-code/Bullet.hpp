#ifndef BULLET_HPP
#define BULLET_HPP
#include <SFML/Graphics.hpp>
#include <vector>
#include <cmath>
#include <tuple>
#include "StopWatch.h"
#include "Aliens.hpp"
#include "Entity.hpp"
#include <cstdlib>


enum class FiringDirection{
    up = 0,
    down,
    defaultd
};

/**
 * @class Bullet
 * @author Rachel Mvelase
 * @date 24/09/2019
 * @file Bullet.hpp
 * @brief The class describes the methods which gives the bullet objects its
 *          attributes, such as speed and direction as well the type of bullet
 */



class Bullet : public Entity
{
public:

    Bullet();
    ~Bullet();

    void fireBullet(sf::RenderWindow &_window );
  
  
   void startFiring(const FiringDirection& fd,sf::Vector2f _bulletPosition);
    
    void BulletsCollusion(sf::RenderWindow& _window);
    
    void BulletOutOfScreen();
    bool alienShoot(sf::Sprite _alien, AliensDirection dir);
    std::tuple<std::vector<sf::Sprite>*, std::vector<FiringDirection>*> getBullets() ;
    void setTexture(sf::Texture _texture, const int& _index =0) override;
    void aliensFiring(sf::Vector2<float> _pos , AliensDirection orinetation);
private:
     Aliens _aliens;
     StopWatch _stopwatch;
     float _bulletSpeed;
     float _bulletTimer;
     float _ellaspsedTime;
     std::vector<bool> IsAlienBullet;
     std::vector<FiringDirection> bulletOrientation;
    
     
     
     sf::Vector2f _bulletPosition;
     sf::Sprite _bulletSprite;
     sf::Texture _bulletTexture;
     sf::Sprite _bulletExplosionSprite;
     sf::Texture _bulletExplosionTexture;
     std::vector<sf::Sprite> _bullets;
};

#endif // BULLET_HPP

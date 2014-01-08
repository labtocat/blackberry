// Segmented Control project template
#ifndef Tabbing_HPP_
#define Tabbing_HPP_

#include <QObject>

namespace bb { namespace cascades { class Application; }}

/*!
 * @brief Application pane object
 *
 *Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class Tabbing : public QObject
{
    Q_OBJECT
public:
    Tabbing(bb::cascades::Application *app);
    virtual ~Tabbing() {}
};

#endif /* Tabbing_HPP_ */